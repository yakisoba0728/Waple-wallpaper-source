// Function: FUN_1404b227c
// Addr: 1404b227c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b227c(longlong param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  longlong in_RAX;
  uint *unaff_RBX;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  longlong in_FS_OFFSET;
  undefined8 auStack_fe [29];
  undefined8 uStack_10;
  uint *puVar3;
  undefined8 *puVar5;
  
  *(uint *)(in_RAX + param_1) = *(uint *)(in_RAX + param_1) & param_2;
  uVar2 = ((uint)in_RAX | *(uint *)(in_FS_OFFSET + in_RAX)) + 0xa54;
  puVar3 = (uint *)(ulonglong)uVar2;
  puVar4 = (undefined8 *)&stack0xfffffffffffffff8;
  puVar5 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x19';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  puVar4 = auStack_fe + 1;
  cVar1 = '\x1b';
  do {
    puVar5 = puVar5 + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *puVar5;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *unaff_RBX = *unaff_RBX & (uint)param_1;
  *puVar3 = *puVar3 & uVar2;
  *(char *)puVar3 = (char)*puVar3 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

