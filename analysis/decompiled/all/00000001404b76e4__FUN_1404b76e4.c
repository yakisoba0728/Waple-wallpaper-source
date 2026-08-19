// Function: FUN_1404b76e4
// Addr: 1404b76e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404b76f7) */

void FUN_1404b76e4(void)

{
  byte bVar1;
  undefined8 in_RAX;
  int *piVar2;
  byte in_CF;
  
  bVar1 = (byte)in_RAX + 1;
  piVar2 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1 + in_CF);
  *piVar2 = *piVar2 + (int)piVar2 + (uint)(0xfe < (byte)in_RAX || CARRY1(bVar1,in_CF));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

