// Function: FUN_1404b76f4
// Addr: 1404b76f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b76f4(byte param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  char *pcVar3;
  longlong unaff_RSI;
  byte *unaff_RDI;
  char in_CF;
  
  pcVar3 = (char *)(ulonglong)
                   ((uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(-in_CF,(char)in_RAX))
                   | 0xed41600);
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + param_1;
  uVar2 = LocalDescriptorTableRegister();
  *(undefined4 *)(&stack0xfffffffffffffff8 + unaff_RSI) = uVar2;
  *pcVar3 = *pcVar3 + (char)in_RAX + CARRY1(bVar1,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

