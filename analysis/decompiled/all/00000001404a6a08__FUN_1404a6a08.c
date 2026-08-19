// Function: FUN_1404a6a08
// Addr: 1404a6a08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0xf04a7357) */

void FUN_1404a6a08(char *param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  uint *puVar2;
  
  bVar1 = (char)in_RAX + 100;
  puVar2 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *(char *)((longlong)puVar2 + -0x61) =
       *(char *)((longlong)puVar2 + -0x61) + (char)((ulonglong)in_RAX >> 8);
  *puVar2 = *puVar2 | (uint)puVar2;
  *puVar2 = *puVar2 | (uint)puVar2;
  *param_1 = *param_1 + unaff_SPL;
  *(byte *)CONCAT71(unaff_00000021,unaff_SPL) =
       *(char *)CONCAT71(unaff_00000021,unaff_SPL) + (bVar1 & 0x69);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

