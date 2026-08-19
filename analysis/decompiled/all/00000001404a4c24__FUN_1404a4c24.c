// Function: FUN_1404a4c24
// Addr: 1404a4c24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4c24(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  code *pcVar2;
  uint in_EAX;
  undefined2 uVar3;
  undefined6 uVar4;
  char unaff_BH;
  undefined4 *unaff_RSI;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar3 = (undefined2)param_2;
  uRam00000001b44f4c2c = uRam00000001b44f4c2c & in_EAX;
  out(*unaff_RSI,uVar3);
  pcVar2 = (code *)swi(7);
  (*pcVar2)();
  pcVar1 = (char *)(CONCAT62(uVar4,uVar3) + -0x33);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

