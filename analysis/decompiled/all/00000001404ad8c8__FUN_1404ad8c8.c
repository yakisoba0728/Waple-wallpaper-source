// Function: FUN_1404ad8c8
// Addr: 1404ad8c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad8c8(char *param_1,uint *param_2)

{
  char in_AL;
  byte bVar1;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar2;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *param_2 = *param_2 & (uint)param_2;
  bVar2 = (byte)param_2;
  bVar1 = *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                   (ulonglong)(byte)(in_AL + bVar2));
  *param_1 = *param_1 + unaff_SPL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1)))
       + bVar1;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1)))
       + bVar1;
  *(byte *)param_2 = (byte)*param_2 & bVar2;
  cRam00000001004aeb05 = cRam00000001004aeb05 + unaff_BH;
  *param_1 = *param_1 +
             *(char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (ulonglong)bVar1);
  *param_2 = *param_2 & (uint)param_1;
  *param_1 = *param_1 + in_AH;
  if (-1 < *param_1) {
    cRam00000001494ae9f6 = cRam00000001494ae9f6 + bVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

