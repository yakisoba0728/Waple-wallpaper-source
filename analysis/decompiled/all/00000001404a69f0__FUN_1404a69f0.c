// Function: FUN_1404a69f0
// Addr: 1404a69f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0xf04a7357) */

void FUN_1404a69f0(char *param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 in_RAX;
  uint *puVar3;
  char unaff_SPL;
  undefined7 unaff_00000021;
  int unaff_EBP;
  char *unaff_RDI;
  
  bVar1 = bRam1200051201004a68;
  puVar3 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bRam1200051201004a68);
  *puVar3 = *puVar3 + unaff_EBP;
  *unaff_RDI = *unaff_RDI + bVar1;
  uVar2 = (uint)puVar3;
  *(uint *)(param_2 + (longlong)puVar3) = *(uint *)(param_2 + (longlong)puVar3) & uVar2;
  *(byte *)CONCAT71(unaff_00000021,unaff_SPL) = *(char *)CONCAT71(unaff_00000021,unaff_SPL) + bVar1;
  *(char *)((longlong)puVar3 + -0x61) =
       *(char *)((longlong)puVar3 + -0x61) + (char)((ulonglong)in_RAX >> 8);
  *puVar3 = *puVar3 | uVar2;
  *puVar3 = *puVar3 | uVar2;
  *param_1 = *param_1 + unaff_SPL;
  *(byte *)CONCAT71(unaff_00000021,unaff_SPL) =
       *(char *)CONCAT71(unaff_00000021,unaff_SPL) + (bVar1 & 0x69);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

