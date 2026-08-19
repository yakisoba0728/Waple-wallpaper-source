// Function: FUN_1404a2dc8
// Addr: 1404a2dc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a2dd0) overlaps instruction at (ram,0x0001404a2dce)
    */

void FUN_1404a2dc8(uint param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  byte in_AL;
  undefined4 uVar2;
  char *unaff_RSI;
  bool in_CF;
  bool in_ZF;
  
  uVar1 = uRam0000000174572ddb;
  if (in_CF || in_ZF) {
    uRam0000000174572ddb = uRam0000000174572ddb + param_1;
  }
  else {
    uVar2 = in(param_2);
    *param_4 = *param_4 + (byte)uVar2;
    in_AL = (byte)uVar2 | 5;
  }
  *unaff_RSI = *unaff_RSI + in_AL + ((in_CF || in_ZF) && CARRY4(uVar1,param_1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

