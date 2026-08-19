// Function: FUN_1404b0090
// Addr: 1404b0090
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0090(char *param_1)

{
  char cVar1;
  byte in_AL;
  byte bVar2;
  char cVar3;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) |
           0xc4) =
       *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
                | 0xc4) | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0xc4;
  param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] | in_AH;
  cVar1 = in_AH - unaff_BH;
  bVar2 = (in_AL | 0xc4) + 0x54 + (in_AH < unaff_BH);
  cVar3 = bVar2 + (bVar2 < 0xfc);
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,cVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,cVar3)))
       + cVar3;
  bVar2 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar1,cVar3)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,cVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,cVar3)))
       + unaff_BL;
  bVar2 = cVar3 + CARRY1(bVar2,unaff_BL);
  cVar3 = bVar2 + (bVar2 < 0xfc);
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,cVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,cVar3)))
       + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

