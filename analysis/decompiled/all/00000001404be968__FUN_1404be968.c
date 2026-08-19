// Function: FUN_1404be968
// Addr: 1404be968
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be968(char *param_1,char param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint *in_RAX;
  char *pcVar3;
  byte unaff_BL;
  byte bVar4;
  char unaff_BH;
  char cVar5;
  undefined4 *unaff_RSI;
  
  bVar4 = unaff_BL & *(byte *)((longlong)in_RAX + -0x77e6ffee);
  uVar2 = (uint)in_RAX + *in_RAX;
  pcVar3 = (char *)(ulonglong)uVar2;
  pcVar3[0x14] = pcVar3[0x14] + unaff_BH + CARRY4((uint)in_RAX,*in_RAX);
  *pcVar3 = *pcVar3 + (char)param_1;
  cVar5 = (char)*unaff_RSI + -8;
  pcVar3[0x53] = pcVar3[0x53] + bVar4;
  *param_1 = *param_1 + cVar5;
  *pcVar3 = *pcVar3 + (char)uVar2;
  pcVar3[-0x10ffd9ff] = pcVar3[-0x10ffd9ff] + param_2;
  uVar1 = *unaff_RSI;
  pcVar3[0x53] = pcVar3[0x53] + bVar4;
  *param_1 = *param_1 + cVar5 + (char)uVar1;
  *(char *)((longlong)pcVar3 * 2) = *(char *)((longlong)pcVar3 * 2) - (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

