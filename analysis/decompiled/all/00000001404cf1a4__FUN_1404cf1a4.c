// Function: FUN_1404cf1a4
// Addr: 1404cf1a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf1a4(int param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint *in_RAX;
  char *pcVar4;
  char cVar5;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  lVar1 = *param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar3 = (char)in_RAX + (char)*in_RAX;
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
  pcVar4[unaff_RSI] = pcVar4[unaff_RSI] + cVar5;
  pcVar4[0x69] = pcVar4[0x69] + cVar5;
  lVar2 = *param_2;
  *(uint *)(pcVar4 + (longlong)param_2) = *(uint *)(pcVar4 + (longlong)param_2) & (uint)pcVar4;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + cVar3;
  *pcVar4 = *pcVar4 + cVar3;
  *(undefined1 *)(unaff_RDI + 0x3c) = 0;
  pcVar4 = (char *)func_0x0001406df21b(param_1 - (int)lVar2,(char)param_2,param_3,param_4 - lVar1);
  *pcVar4 = *pcVar4 + (char)pcVar4;
  *(undefined1 *)(unaff_RDI + 0x3c) = 0;
  func_0x00014f4df22b();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

