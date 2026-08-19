// Function: FUN_1404a2984
// Addr: 1404a2984
// Size: 1 bytes


void FUN_1404a2984(char *param_1,char param_2,undefined8 param_3,char *param_4)

{
  char cVar3;
  int in_EAX;
  uint uVar1;
  char *pcVar2;
  char *unaff_RBX;
  char unaff_SPL;
  
  *param_1 = *param_1 + (char)((uint)in_EAX >> 8);
  uVar1 = in_EAX + 0x34050002;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
  pcVar2 = (char *)(ulonglong)CONCAT31((int3)(uVar1 >> 8),cRam7c000532c3000532);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar2 = *pcVar2 + cRam7c000532c3000532;
  cVar3 = (char)(uVar1 >> 8);
  pcVar2[-0x3cffface] = pcVar2[-0x3cffface] + cVar3;
  *param_1 = *param_1 + cVar3;
  *unaff_RBX = *unaff_RBX + param_2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

