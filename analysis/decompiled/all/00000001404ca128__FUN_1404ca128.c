// Function: FUN_1404ca128
// Addr: 1404ca128
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ca10f) */
/* WARNING: Removing unreachable block (ram,0x0001404ca0fb) */

void FUN_1404ca128(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 in_RAX;
  char *pcVar2;
  
  cVar1 = in(0xd);
  *(char *)(param_2 + 100) = *(char *)(param_2 + 100) + cVar1;
  pcVar2 = (char *)(ulonglong)
                   (CONCAT31((int3)((uint)((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1) +
                                          0x70000b54) >> 8),cRame40000060021004c) | 0xc640000);
  *pcVar2 = *pcVar2 + cRame40000060021004c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

