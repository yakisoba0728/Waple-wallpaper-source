// Function: FUN_1404abdc8
// Addr: 1404abdc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abdc8(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar3;
  undefined8 in_RAX;
  byte bVar4;
  undefined6 uVar5;
  int *piVar2;
  
  uVar5 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar3 = (char)((ulonglong)in_RAX >> 8) + (char)((ulonglong)param_2 >> 8);
  bVar1 = (byte)in_RAX | *(byte *)CONCAT62(uVar5,CONCAT11(bVar3,(byte)in_RAX));
  bVar4 = bVar3 + (byte)param_2;
  bVar1 = bVar1 + *(char *)CONCAT62(uVar5,CONCAT11(bVar4,bVar1)) + CARRY1(bVar3,(byte)param_2);
  piVar2 = (int *)CONCAT62(uVar5,CONCAT11(bVar4 + bVar1,bVar1));
  *piVar2 = *piVar2 + (int)piVar2 + (uint)CARRY1(bVar4,bVar1);
  verr();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

