// Function: FUN_14049f660
// Addr: 14049f660
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f660(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  uint *puVar5;
  int *piVar6;
  char *unaff_RBX;
  uint *unaff_RSI;
  longlong in_FS_OFFSET;
  char *unaff_retaddr;
  
  puVar5 = (uint *)(in_RAX ^ 0x92);
  uVar2 = *puVar5;
  uVar3 = (uint)puVar5;
  *puVar5 = *puVar5 + uVar3;
  if (CARRY4(uVar2,uVar3) || *puVar5 == 0) {
    *puVar5 = *puVar5 + uVar3;
    *param_4 = *param_4 + '\b';
    *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
    *unaff_retaddr = *unaff_retaddr + (char)((ulonglong)unaff_retaddr >> 8);
    piVar6 = (int *)((ulonglong)param_2 & 0xffffffff);
    *piVar6 = *piVar6 + (int)param_2;
    piVar6 = (int *)((ulonglong)piVar6 ^ 0x92);
    *piVar6 = *piVar6 + (int)piVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + ((byte)in_RAX ^ 0x92);
  uVar2 = *unaff_RSI;
  *unaff_RBX = *unaff_RBX + (char)((uVar3 & uVar2) >> 8);
  uVar4 = (ulonglong)(uVar3 & uVar2) ^ 7;
  *param_2 = *param_2 + (char)puVar5 + '\x01';
  pbVar1 = (byte *)(in_FS_OFFSET + uVar4);
  *pbVar1 = *pbVar1 | (byte)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

