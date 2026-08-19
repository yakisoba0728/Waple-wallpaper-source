// Function: FUN_1404c7954
// Addr: 1404c7954
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7954(int *param_1,undefined2 param_2)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  char in_AL;
  char cVar4;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  byte bVar5;
  int unaff_EBX;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  bool in_ZF;
  
  out(*unaff_RSI,param_2);
  if (!in_ZF) {
    pbVar1 = (byte *)(unaff_RDI + 100);
    bVar3 = *pbVar1;
    bVar5 = (byte)unaff_EBX;
    *pbVar1 = *pbVar1 + bVar5;
    cVar4 = (in_AL - *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))) -
            CARRY1(bVar3,bVar5);
    *(byte *)param_1 = (char)*param_1 + bVar5;
    piVar2 = (int *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) ^ 0x1b) +
                    (CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) ^ 0x1b));
    *piVar2 = *piVar2 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

