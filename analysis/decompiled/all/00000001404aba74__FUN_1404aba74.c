// Function: FUN_1404aba74
// Addr: 1404aba74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aba74(undefined1 *param_1,int *param_2)

{
  char *pcVar1;
  byte bVar2;
  char in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  undefined1 uVar3;
  byte bVar4;
  undefined6 uVar5;
  longlong unaff_RBX;
  bool in_SF;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar3 = SUB81(param_2,0);
  if (!in_SF) {
    *param_1 = *param_1;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
    pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x43fff0aa);
    *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + (int)&stack0xfffffffffffffff8;
  bVar4 = (byte)((ulonglong)param_2 >> 8) & *(byte *)(unaff_RBX + (longlong)param_2);
  bVar2 = *(byte *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3));
  *(byte *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3)) + in_AH;
  if (!CARRY1(bVar2,in_AH)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

