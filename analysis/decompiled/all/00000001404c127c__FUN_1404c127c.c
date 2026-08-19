// Function: FUN_1404c127c
// Addr: 1404c127c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c127c(byte *param_1,longlong param_2,char param_3)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined1 uVar2;
  byte bVar3;
  undefined6 uVar4;
  char unaff_R12B;
  
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar2 = SUB81(param_1,0);
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) -
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AH;
  bVar3 = (byte)((ulonglong)param_1 >> 8) | *param_1;
  pcVar1 = (char *)(param_2 + 0x11840029 + CONCAT62(uVar4,CONCAT11(bVar3,uVar2)));
  *pcVar1 = *pcVar1 + in_AL;
  *(char *)CONCAT62(uVar4,CONCAT11(bVar3,uVar2)) =
       *(char *)CONCAT62(uVar4,CONCAT11(bVar3,uVar2)) + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

