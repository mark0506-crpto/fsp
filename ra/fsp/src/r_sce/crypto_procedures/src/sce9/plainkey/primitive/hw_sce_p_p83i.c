/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products. No
* other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws.
* THIS SOFTWARE IS PROVIDED  AND RENESAS MAKES NO WARRANTIES REGARDING
* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED. TO THE MAXIMUM
* EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES
* SHALL BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS
* SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability of
* this software. By using this software, you agree to the additional terms and conditions found by accessing the
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2020 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/
/***********************************************************************************************************************
 * History : DD.MM.YYYY Version Description
 *         : 05.10.2020 1.00        First Release.
 *         : 02.12.2020 1.01        Added new functions such as the Brainpool curve.
***********************************************************************************************************************/

/***********************************************************************************************************************
Includes   <System Includes> , "Project Includes"
***********************************************************************************************************************/
#include "r_sce_if.h"
#include "hw_sce_ra_private.h"

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Imported global variables and functions (from other files)
***********************************************************************************************************************/

/***********************************************************************************************************************
Exported global variables (to be accessed by other files)
***********************************************************************************************************************/

/***********************************************************************************************************************
Private global variables and functions
***********************************************************************************************************************/

fsp_err_t HW_SCE_Aes192GcmEncryptInitSub(uint32_t *InData_KeyType, uint32_t *InData_KeyIndex, uint32_t *InData_IV)
{
    uint32_t iLoop = 0u, iLoop1 = 0u, iLoop2 = 0u, jLoop = 0u, kLoop = 0u, oLoop = 0u, oLoop1 = 0u, oLoop2 = 0u, KEY_ADR = 0u, OFS_ADR = 0u, MAX_CNT2 = 0u;
    uint32_t dummy = 0u;
    (void)iLoop;
    (void)iLoop1;
    (void)iLoop2;
    (void)jLoop;
    (void)kLoop;
    (void)oLoop;
    (void)oLoop1;
    (void)oLoop2;
    (void)dummy;
    (void)KEY_ADR;
    (void)OFS_ADR;
    (void)MAX_CNT2;
    if (0x0u != (SCE->REG_1BCH & 0x1fu))
    {
        return FSP_ERR_CRYPTO_SCE_RESOURCE_CONFLICT;
    }
    SCE->REG_84H = 0x00008301u;
    SCE->REG_108H = 0x00000000u;
    SCE->REG_104H = 0x00000068u;
    SCE->REG_E0H = 0x800100e0u;
    /* WAIT_LOOP */
    while (1u != SCE->REG_104H_b.B31)
    {
        /* waiting */
    }
    SCE->REG_100H = InData_KeyIndex[0];
    SCE->REG_104H = 0x00000058u;
    SCE->REG_E0H = 0x800103a0u;
    /* WAIT_LOOP */
    while (1u != SCE->REG_104H_b.B31)
    {
        /* waiting */
    }
    SCE->REG_100H = change_endian_long(0x00000083u);
    HW_SCE_p_func101(0x84ac02c5u, 0x8dd0a073u, 0x6dc9b82fu, 0x03d41e37u);
    HW_SCE_p_func043();
    SCE->REG_ECH = 0x0000b4e0u;
    SCE->REG_ECH = 0x00000006u;
    SCE->REG_104H = 0x00000058u;
    SCE->REG_E0H = 0x800103a0u;
    /* WAIT_LOOP */
    while (1u != SCE->REG_104H_b.B31)
    {
        /* waiting */
    }
    SCE->REG_100H = change_endian_long(0x00000083u);
    HW_SCE_p_func101(0x2c8ad926u, 0x3de8b014u, 0x034a1235u, 0xa559cac1u);
    HW_SCE_p_func044();
    HW_SCE_p_func100(0x18660b22u, 0xc964460cu, 0x67195656u, 0x108283bbu);
    SCE->REG_104H = 0x00000762u;
    SCE->REG_D0H = 0x40000100u;
    SCE->REG_C4H = 0x02f087b7u;
    /* WAIT_LOOP */
    while (1u != SCE->REG_104H_b.B31)
    {
        /* waiting */
    }
    SCE->REG_100H = InData_KeyIndex[1];
    SCE->REG_100H = InData_KeyIndex[2];
    SCE->REG_100H = InData_KeyIndex[3];
    SCE->REG_100H = InData_KeyIndex[4];
    /* WAIT_LOOP */
    while (1u != SCE->REG_104H_b.B31)
    {
        /* waiting */
    }
    SCE->REG_100H = InData_KeyIndex[5];
    SCE->REG_100H = InData_KeyIndex[6];
    SCE->REG_100H = InData_KeyIndex[7];
    SCE->REG_100H = InData_KeyIndex[8];
    SCE->REG_A4H = 0x00080805u;
    SCE->REG_00H = 0x00001213u;
    /* WAIT_LOOP */
    while (0u != SCE->REG_00H_b.B25)
    {
        /* waiting */
    }
    SCE->REG_1CH = 0x00001800u;
    HW_SCE_p_func100(0x9e08e9ddu, 0x0668ff5du, 0x3e762a11u, 0x9dbfad92u);
    SCE->REG_A4H = 0x00090805u;
    SCE->REG_00H = 0x00001213u;
    /* WAIT_LOOP */
    while (0u != SCE->REG_00H_b.B25)
    {
        /* waiting */
    }
    SCE->REG_1CH = 0x00001800u;
    SCE->REG_104H = 0x00000362u;
    SCE->REG_D0H = 0x40000000u;
    SCE->REG_C4H = 0x000087b5u;
    /* WAIT_LOOP */
    while (1u != SCE->REG_104H_b.B31)
    {
        /* waiting */
    }
    SCE->REG_100H = InData_KeyIndex[9];
    SCE->REG_100H = InData_KeyIndex[10];
    SCE->REG_100H = InData_KeyIndex[11];
    SCE->REG_100H = InData_KeyIndex[12];
    SCE->REG_C4H = 0x00900c45u;
    SCE->REG_00H = 0x00002213u;
    /* WAIT_LOOP */
    while (0u != SCE->REG_00H_b.B25)
    {
        /* waiting */
    }
    SCE->REG_1CH = 0x00001800u;
    HW_SCE_p_func100(0xc5a33008u, 0xbc8de0f9u, 0xd2585b7fu, 0x28c85160u);
    SCE->REG_1CH = 0x00400000u;
    SCE->REG_1D0H = 0x00000000u;
    if (1u == (SCE->REG_1CH_b.B22))
    {
        HW_SCE_p_func102(0x5ce71104u, 0x38d31448u, 0xe322ccd5u, 0x19656ec0u);
        SCE->REG_1BCH = 0x00000040u;
        /* WAIT_LOOP */
        while (0u != SCE->REG_18H_b.B12)
        {
            /* waiting */
        }
        return FSP_ERR_CRYPTO_SCE_KEY_SET_FAIL;
    }
    else
    {
        SCE->REG_104H = 0x00000368u;
        SCE->REG_E0H = 0x80040080u;
        /* WAIT_LOOP */
        while (1u != SCE->REG_104H_b.B31)
        {
            /* waiting */
        }
        SCE->REG_100H = InData_IV[0];
        /* WAIT_LOOP */
        while (1u != SCE->REG_104H_b.B31)
        {
            /* waiting */
        }
        SCE->REG_100H = InData_IV[1];
        /* WAIT_LOOP */
        while (1u != SCE->REG_104H_b.B31)
        {
            /* waiting */
        }
        SCE->REG_100H = InData_IV[2];
        /* WAIT_LOOP */
        while (1u != SCE->REG_104H_b.B31)
        {
            /* waiting */
        }
        SCE->REG_100H = InData_IV[3];
        SCE->REG_7CH = 0x00000001u;
        SCE->REG_7CH = 0x00000041u;
        SCE->REG_104H = 0x00000051u;
        SCE->REG_B0H = 0x40000010u;
        SCE->REG_A4H = 0x00008a84u;
        /* WAIT_LOOP */
        while (1u != SCE->REG_104H_b.B31)
        {
            /* waiting */
        }
        SCE->REG_100H = change_endian_long(0x00000000u);
        SCE->REG_00H = 0x00005113u;
        SCE->REG_74H = 0x00001000u;
        /* WAIT_LOOP */
        while (0u != SCE->REG_00H_b.B25)
        {
            /* waiting */
        }
        SCE->REG_1CH = 0x00001800u;
        SCE->REG_74H = 0x00000004u;
        SCE->REG_104H = 0x00000354u;
        /* WAIT_LOOP */
        while (1u != SCE->REG_104H_b.B31)
        {
            /* waiting */
        }
        SCE->REG_100H = change_endian_long(0x00000000u);
        SCE->REG_100H = change_endian_long(0x00000000u);
        SCE->REG_100H = change_endian_long(0x00000000u);
        SCE->REG_100H = change_endian_long(0x00000000u);
        SCE->REG_74H = 0x00000002u;
        return FSP_SUCCESS;
    }
}

/***********************************************************************************************************************
End of function ./input_dir/S6C1/Cryptographic_PlainKey/HW_SCE_p_p83i.prc
***********************************************************************************************************************/
