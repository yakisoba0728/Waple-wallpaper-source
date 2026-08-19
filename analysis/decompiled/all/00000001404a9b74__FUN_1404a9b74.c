// Function: FUN_1404a9b74
// Addr: 1404a9b74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9b74(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined8 in_RAX;
  uint *puVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  char in_CF;
  
  puVar4 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'd' + in_CF);
  uVar3 = (uint)puVar4 | *puVar4;
  cVar2 = ((byte)uVar3 | 0x34) * '\x02';
  uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar2) | 0xde6e500;
  pcVar1 = (char *)(param_2 + 0x421004a + CONCAT71(unaff_00000019,unaff_BL) * 4);
  *pcVar1 = *pcVar1 + (char)param_2;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar2 + *(char *)(ulonglong)uVar3 + -0x2c);
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 | uVar3;
  in(0x26);
  pcVar1 = (char *)(param_2 + 0xb21004a + CONCAT71(unaff_00000019,unaff_BL) * 4);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

