// Function: FUN_1404b5850
// Addr: 1404b5850
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5850(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  ulonglong in_RAX;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong uVar7;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  bVar5 = (byte)((ulonglong)param_1 >> 8);
  *param_4 = *param_4;
  cVar2 = (char)(in_RAX & 0xffffffffffffff57) + '\x02';
  pcVar4 = (char *)CONCAT71((int7)((in_RAX & 0xffffffffffffff57) >> 8),cVar2);
  unaff_RSI[(longlong)&stack0x00000000] = unaff_RSI[(longlong)&stack0x00000000] + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  *(byte *)(unaff_RBP + -0x52c0ffe6) = *(byte *)(unaff_RBP + -0x52c0ffe6) ^ bVar5;
  *unaff_RDI = *unaff_RSI;
  pcVar4 = (char *)func_0x0001406c58b3();
  *pcVar4 = *pcVar4 + (char)pcVar4;
  *(byte *)(unaff_RBP + -0x52c0ffe6) = *(byte *)(unaff_RBP + -0x52c0ffe6) ^ bVar5;
  pcVar1 = unaff_RDI + 2;
  unaff_RDI[1] = unaff_RSI[1];
  pcVar4 = (char *)func_0x00014b4c58c3();
  uVar6 = (uint)param_2 | *(uint *)(param_2 + 0x1121f007);
  uVar7 = (ulonglong)((int)&stack0x00000000 + uVar6);
  iVar3 = (int)CONCAT71((int7)((ulonglong)pcVar4 >> 8),(char)pcVar4 + *pcVar4) + 0x7740500;
  uVar6 = CONCAT31((int3)((uint)iVar3 >> 8),(char)iVar3 + (char)(uVar6 >> 8));
  cVar2 = unaff_BL + unaff_BH;
  pcVar4 = (char *)((ulonglong)uVar6 + 0x21004b57);
  *pcVar4 = *pcVar4 + '\x1a';
  uVar6 = uVar6 + 0xe4050002;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar2)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar2)) + cVar2;
  pcVar4 = (char *)((ulonglong)uVar6 + 0x21004b57);
  *pcVar4 = *pcVar4 + '\x1a';
  uVar6 = uVar6 | 0x540d0004;
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 | uVar6;
  *pcVar1 = *pcVar1 + '\x1a';
  *(char **)(uVar7 - 8) = pcVar1;
  *param_4 = *param_4 + (char)(uVar7 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

