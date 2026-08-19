// Function: FUN_1404c6978
// Addr: 1404c6978
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6978(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  int unaff_ESI;
  byte *pbVar2;
  
  pbVar2 = (byte *)(ulonglong)
                   (uint)(unaff_ESI + *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  cVar1 = *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x20);
  *pbVar2 = *pbVar2 >> 1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
       (char)((ulonglong)param_1 >> 8);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) &
       CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

