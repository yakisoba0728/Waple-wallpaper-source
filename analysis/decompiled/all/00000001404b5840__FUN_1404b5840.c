// Function: FUN_1404b5840
// Addr: 1404b5840
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5840(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 in_RAX;
  uint *puVar5;
  char *pcVar6;
  byte bVar7;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong uVar8;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  puVar5 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)in_RAX,(char)in_RAX));
  uVar3 = (uint)puVar5 | *puVar5;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)((ulonglong)param_2 >> 8);
  *(undefined1 *)(param_2 + -0x54f6ffe6) = 0;
  unaff_RDI[param_2 * 2] = unaff_RDI[param_2 * 2] + (char)(uVar3 >> 8);
  *param_4 = *param_4;
  cVar2 = (char)uVar3 + '\x02';
  pcVar6 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar2);
  unaff_RSI[(longlong)&stack0x00000000] = unaff_RSI[(longlong)&stack0x00000000] + cVar2;
  *pcVar6 = *pcVar6 + cVar2;
  *(byte *)(unaff_RBP + -0x52c0ffe6) = *(byte *)(unaff_RBP + -0x52c0ffe6) ^ bVar7;
  *unaff_RDI = *unaff_RSI;
  pcVar6 = (char *)func_0x0001406c58b3();
  *pcVar6 = *pcVar6 + (char)pcVar6;
  *(byte *)(unaff_RBP + -0x52c0ffe6) = *(byte *)(unaff_RBP + -0x52c0ffe6) ^ bVar7;
  pcVar1 = unaff_RDI + 2;
  unaff_RDI[1] = unaff_RSI[1];
  pcVar6 = (char *)func_0x00014b4c58c3();
  uVar3 = (uint)param_2 | *(uint *)(param_2 + 0x1121f007);
  uVar8 = (ulonglong)((int)&stack0x00000000 + uVar3);
  iVar4 = (int)CONCAT71((int7)((ulonglong)pcVar6 >> 8),(char)pcVar6 + *pcVar6) + 0x7740500;
  uVar3 = CONCAT31((int3)((uint)iVar4 >> 8),(char)iVar4 + (char)(uVar3 >> 8));
  cVar2 = unaff_BL + unaff_BH;
  pcVar6 = (char *)((ulonglong)uVar3 + 0x21004b57);
  *pcVar6 = *pcVar6 + '\x1a';
  uVar3 = uVar3 + 0xe4050002;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar2)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar2)) + cVar2;
  pcVar6 = (char *)((ulonglong)uVar3 + 0x21004b57);
  *pcVar6 = *pcVar6 + '\x1a';
  uVar3 = uVar3 | 0x540d0004;
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 | uVar3;
  *pcVar1 = *pcVar1 + '\x1a';
  *(char **)(uVar8 - 8) = pcVar1;
  *param_4 = *param_4 + (char)(uVar8 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

