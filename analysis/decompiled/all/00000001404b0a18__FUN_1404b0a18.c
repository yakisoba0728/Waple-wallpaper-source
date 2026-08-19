// Function: FUN_1404b0a18
// Addr: 1404b0a18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0a18(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar3;
  byte *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + in_AH;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_2);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + (char)((ulonglong)param_2 >> 8);
  uVar2 = uRam0000000155d2ed2b;
  LOCK();
  cVar3 = (char)uRam0000000155d2ed2b;
  UNLOCK();
  uRam0000000155d2ed2b = (int)param_2;
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *(int *)(&stack0x00000000 +
          CONCAT62(in_register_00000002,CONCAT11(in_AH + cVar3,in_AL + (char)param_2))) =
       *(int *)(&stack0x00000000 +
               CONCAT62(in_register_00000002,CONCAT11(in_AH + cVar3,in_AL + (char)param_2))) +
       (int)param_1;
  pcVar1 = (char *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar2) + unaff_RSI * 4);
  *pcVar1 = *pcVar1 + (byte)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

