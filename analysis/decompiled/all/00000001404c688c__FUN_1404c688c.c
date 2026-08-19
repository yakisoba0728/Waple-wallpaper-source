// Function: FUN_1404c688c
// Addr: 1404c688c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c688c(int param_1,char param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte *unaff_RDI;
  
  puVar3 = (undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
  bVar5 = (byte)((uint)param_1 >> 8);
  *unaff_RDI = *unaff_RDI ^ bVar5;
  puVar3[unaff_RBP * 8 + 0x210049] =
       puVar3[unaff_RBP * 8 + 0x210049] + (char)((ulonglong)puVar3 >> 8);
  *puVar3 = *puVar3;
  *(undefined1 **)((ulonglong)in_EAX - 8) = puVar3;
  *unaff_RDI = *unaff_RDI ^ bVar5;
  puVar3[unaff_RSI + -0x175bffd1] = puVar3[unaff_RSI + -0x175bffd1] + param_2;
  cVar6 = (char)((ulonglong)in_EAX - 8);
  *param_4 = *param_4 + cVar6;
  cVar1 = cRam84002f36c8002f36;
  iVar2 = (int)&stack0x00000000 + 0x34050002;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),cRam84002f36c8002f36);
  *(char *)(longlong)param_1 = *(char *)(longlong)param_1 + cVar6;
  *pcVar4 = *pcVar4 + cVar1;
  pcVar4[-0x37ffd0ca] = pcVar4[-0x37ffd0ca] + (char)((uint)iVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

