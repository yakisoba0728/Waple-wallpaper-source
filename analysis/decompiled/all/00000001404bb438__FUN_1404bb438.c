// Function: FUN_1404bb438
// Addr: 1404bb438
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb438(char *param_1,byte *param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_ESI;
  ulonglong uVar3;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  char in_CF;
  
  *param_1 = (*param_1 - in_AL) - in_CF;
  *param_2 = *param_2 | in_AL;
  uVar3 = (ulonglong)
          (unaff_ESI |
          *(uint *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 | in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + (char)param_1;
  bVar2 = in_AL | param_2[in_FS_OFFSET];
  *param_1 = *param_1 << 1;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4b + uVar3 * 4);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       + bVar2;
  bVar2 = bVar2 + (char)param_2;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2));
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4b + uVar3 * 4);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 + bVar2;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       + bVar2;
  bVar2 = bVar2 | param_2[in_FS_OFFSET];
  *param_1 = *param_1 << 1;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4b + uVar3 * 4);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 | bVar2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       + (char)param_1;
  bVar2 = bVar2 | param_2[in_FS_OFFSET];
  *(char *)(uVar3 + 0x21) = *(char *)(uVar3 + 0x21) + (char)param_2;
  *unaff_RDI = *unaff_RDI + unaff_BH;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2));
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       + bVar2;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       + bVar2;
  *(ulonglong *)(uVar3 - 8) = uVar3;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

