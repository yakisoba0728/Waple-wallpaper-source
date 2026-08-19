// Function: FUN_1404c0ee0
// Addr: 1404c0ee0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c0f41) */

void FUN_1404c0ee0(int param_1,int *param_2)

{
  byte bVar1;
  byte *in_RAX;
  char *pcVar2;
  byte bVar3;
  undefined6 uVar4;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  *(int *)in_RAX = *(int *)in_RAX + (int)in_RAX;
  bVar3 = *in_RAX;
  bVar1 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar1;
  *param_2 = *param_2 + param_1 + (uint)CARRY1(bVar3,bVar1);
  bVar3 = (byte)((ulonglong)param_2 >> 8) | in_RAX[CONCAT44(unaff_00000034,unaff_ESI)];
  *(char *)CONCAT62(uVar4,CONCAT11(bVar3,(char)param_2)) =
       *(char *)CONCAT62(uVar4,CONCAT11(bVar3,(char)param_2)) + (char)param_1;
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            bVar1 ^ *(byte *)CONCAT44(unaff_00000034,unaff_ESI));
  *pcVar2 = *pcVar2 + (char)((uint)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

