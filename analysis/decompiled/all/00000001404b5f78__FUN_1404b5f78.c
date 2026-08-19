// Function: FUN_1404b5f78
// Addr: 1404b5f78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5f78(undefined8 param_1,undefined8 param_2,uint param_3,char *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  ulonglong in_RAX;
  uint *puVar4;
  longlong unaff_RBX;
  char unaff_SPL;
  
  pbVar1 = (byte *)(unaff_RBX * 2);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)in_RAX;
  *(int *)(unaff_RBX * 2) =
       (*(int *)(unaff_RBX * 2) - (int)in_RAX) - (uint)CARRY1(bVar3,(byte)in_RAX);
  puVar4 = (uint *)(in_RAX ^ 0xe6);
  *param_4 = *param_4 + unaff_SPL;
  bVar3 = (byte)puVar4;
  *(byte *)puVar4 = (byte)*puVar4 + bVar3;
  uVar2 = *puVar4;
  *(byte *)puVar4 = (byte)*puVar4 + bVar3;
  *(int *)(unaff_RBX * 2) =
       (*(int *)(unaff_RBX * 2) - (int)puVar4) -
       (uint)(param_3 < *puVar4 || param_3 - *puVar4 < (uint)CARRY1((byte)uVar2,bVar3));
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

