// Function: FUN_1404bada8
// Addr: 1404bada8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bada8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  char *unaff_RBX;
  char unaff_SPL;
  undefined1 *unaff_RSI;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  uVar1 = *unaff_RSI;
  *param_4 = *param_4 + unaff_SPL;
  uVar2 = (CONCAT31((int3)((uint)in_EAX >> 8),uVar1) ^ 0xb0002100) + 0x64050002;
  uVar3 = CONCAT31((int3)(uVar2 >> 8),(byte)uVar2 | *(byte *)(ulonglong)uVar2) ^ 0x5a002105;
  uVar2 = uVar3 + 0xacc40021;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  cRam000000019a4bced2 = cRam000000019a4bced2 + cVar5;
  uVar2 = uVar3 + 0x59880042;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  *unaff_RBX = *unaff_RBX + (char)(uVar2 >> 8);
  uVar3 = uVar3 + 0x5ebd0063;
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 & uVar3;
  pcVar4 = (char *)CONCAT71((uint7)(uint3)(uVar3 >> 8),0xac);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar4 = *pcVar4 + -0x54;
  pcVar4[0x23002104] = pcVar4[0x23002104] + cVar5;
  *param_4 = *param_4 + -0x33;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

