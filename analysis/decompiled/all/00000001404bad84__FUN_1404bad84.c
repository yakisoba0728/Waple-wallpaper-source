// Function: FUN_1404bad84
// Addr: 1404bad84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bad84(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char cVar6;
  char *unaff_RBX;
  byte unaff_SPL;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  iVar2 = in_EAX + -0x4ffffb1c;
  *unaff_RBX = *unaff_RBX + (char)((uint)iVar2 >> 8);
  bVar1 = *param_4;
  *param_4 = *param_4 + unaff_SPL;
  iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 + '!') + (uint)CARRY1(bVar1,unaff_SPL);
  cRam00000001634bb5d9 = cRam00000001634bb5d9 + (char)iVar2 + '\'';
  uVar3 = iVar2 + 0x2f460c48;
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 & uVar3;
  *param_4 = *param_4 + unaff_SPL;
  uVar3 = (int)CONCAT71((uint7)(uint3)(uVar3 >> 8),0xac) + 0x64050002;
  uVar4 = CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 | *(byte *)(ulonglong)uVar3) ^ 0x5a002105;
  uVar3 = uVar4 + 0xacc40021;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  cRam000000019a4bced2 = cRam000000019a4bced2 + cVar6;
  uVar3 = uVar4 + 0x59880042;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  *unaff_RBX = *unaff_RBX + (char)(uVar3 >> 8);
  uVar4 = uVar4 + 0x5ebd0063;
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 & uVar4;
  pcVar5 = (char *)CONCAT71((uint7)(uint3)(uVar4 >> 8),0xac);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar5 = *pcVar5 + -0x54;
  pcVar5[0x23002104] = pcVar5[0x23002104] + cVar6;
  *param_4 = *param_4 - 0x33;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

