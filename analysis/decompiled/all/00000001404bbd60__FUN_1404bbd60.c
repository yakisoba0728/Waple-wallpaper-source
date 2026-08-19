// Function: FUN_1404bbd60
// Addr: 1404bbd60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbd60(char *param_1,uint *param_2)

{
  char *pcVar1;
  char cVar2;
  int *in_RAX;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  char *unaff_RSI;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  byte in_CF;
  ushort in_CR0;
  
  *(int *)((longlong)in_RAX + 0x7808010b) =
       *(int *)((longlong)in_RAX + 0x7808010b) + unaff_EDI + (uint)in_CF;
  *(uint *)((longlong)in_RAX + 0x6002222) = (uint)in_CR0;
  uVar3 = (ulonglong)((uint)&stack0x00000000 & *param_2);
  pcVar1 = (char *)(uVar3 + 0x4b + CONCAT44(unaff_0000003c,unaff_EDI) * 4);
  cVar2 = (char)((ulonglong)in_RAX >> 8);
  *pcVar1 = *pcVar1 + cVar2;
  *param_1 = *param_1 + cVar2;
  *unaff_RSI = *unaff_RSI + (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + (int)in_RAX;
  *(undefined8 *)(uVar3 - 8) = unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

