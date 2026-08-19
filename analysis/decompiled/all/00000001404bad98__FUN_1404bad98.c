// Function: FUN_1404bad98
// Addr: 1404bad98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bad98(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  char *unaff_RBX;
  byte in_CF;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  uVar1 = in_EAX + 0xc000574 + (uint)in_CF;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
  uVar1 = uVar1 + 0x28350855;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 & uVar1;
  *param_4 = *param_4 + -8;
  uVar1 = (int)CONCAT71((uint7)(uint3)(uVar1 >> 8),0xac) + 0x64050002;
  uVar2 = CONCAT31((int3)(uVar1 >> 8),(byte)uVar1 | *(byte *)(ulonglong)uVar1) ^ 0x5a002105;
  uVar1 = uVar2 + 0xacc40021;
  *param_4 = *param_4 + -8;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  cRam000000019a4bced2 = cRam000000019a4bced2 + cVar4;
  uVar1 = uVar2 + 0x59880042;
  *param_4 = *param_4 + -8;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  *unaff_RBX = *unaff_RBX + (char)(uVar1 >> 8);
  uVar2 = uVar2 + 0x5ebd0063;
  *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 & uVar2;
  pcVar3 = (char *)CONCAT71((uint7)(uint3)(uVar2 >> 8),0xac);
  *param_4 = *param_4 + -8;
  *pcVar3 = *pcVar3 + -0x54;
  pcVar3[0x23002104] = pcVar3[0x23002104] + cVar4;
  *param_4 = *param_4 + -0x33;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

