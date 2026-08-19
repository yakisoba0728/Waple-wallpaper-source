// Function: FUN_1404badb8
// Addr: 1404badb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404badb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  char *unaff_RBX;
  char unaff_SPL;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  uVar1 = in_EAX ^ 0x5a002105;
  uVar2 = uVar1 + 0xacc40021;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  cRam000000019a4bced2 = cRam000000019a4bced2 + cVar4;
  uVar2 = uVar1 + 0x59880042;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  *unaff_RBX = *unaff_RBX + (char)(uVar2 >> 8);
  uVar1 = uVar1 + 0x5ebd0063;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 & uVar1;
  pcVar3 = (char *)CONCAT71((uint7)(uint3)(uVar1 >> 8),0xac);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar3 = *pcVar3 + -0x54;
  pcVar3[0x23002104] = pcVar3[0x23002104] + cVar4;
  *param_4 = *param_4 + -0x33;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

