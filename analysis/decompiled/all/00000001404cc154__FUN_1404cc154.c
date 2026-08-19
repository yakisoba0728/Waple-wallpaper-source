// Function: FUN_1404cc154
// Addr: 1404cc154
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc154(char *param_1,undefined8 param_2,char param_3)

{
  undefined3 uVar1;
  char cVar4;
  int in_EAX;
  int iVar2;
  char *pcVar3;
  char cVar5;
  char unaff_R12B;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  iVar2 = in_EAX + -0x5ffffb8c;
  cVar4 = (char)((uint)iVar2 >> 8) + cVar5;
  uVar1 = (undefined3)(CONCAT22((short)((uint)iVar2 >> 0x10),CONCAT11(cVar4,(char)iVar2)) >> 8);
  pcVar3 = (char *)((ulonglong)(CONCAT31(uVar1,(char)iVar2) | 0x34) | 0x34);
  pcVar3[-0x40] = pcVar3[-0x40] + cVar5;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar3 = *pcVar3 + (char)pcVar3;
  pcVar3[-0xbffcbf4] = pcVar3[-0xbffcbf4] + cVar4;
  pcVar3 = (char *)(((ulonglong)CONCAT31(uVar1,(char)pcVar3) | 0x34) - 0x40);
  *pcVar3 = *pcVar3 + cVar5;
  *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

