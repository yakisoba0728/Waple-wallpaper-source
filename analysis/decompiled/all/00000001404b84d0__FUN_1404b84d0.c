// Function: FUN_1404b84d0
// Addr: 1404b84d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b84d0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  longlong unaff_RBP;
  char *pcVar3;
  
  uVar2 = (in_EAX & 0x1d000378) + 0x3600470;
  pcVar3 = (char *)(ulonglong)uVar2;
  cVar1 = *pcVar3;
  *pcVar3 = *pcVar3 + (char)uVar2;
  *(int *)(unaff_RBP + 0x1b) =
       *(int *)(unaff_RBP + 0x1b) +
       CONCAT22((short)((uint)param_2 >> 0x10),
                CONCAT11((char)((uint)param_2 >> 8) + cVar1,(char)param_2));
  *(char *)(unaff_RBP + -8) = *(char *)(unaff_RBP + -8) + (char)param_2;
  func_0x0001189484f7();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

