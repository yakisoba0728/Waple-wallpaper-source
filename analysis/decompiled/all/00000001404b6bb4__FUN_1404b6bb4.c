// Function: FUN_1404b6bb4
// Addr: 1404b6bb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6bb4(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 in_RAX;
  int *piVar3;
  byte in_CF;
  uint *puVar4;
  
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0xc4);
  uVar2 = ((int)piVar3 - *piVar3) - (uint)in_CF;
  puVar4 = (uint *)(ulonglong)uVar2;
  *puVar4 = *puVar4 & uVar2;
  uVar1 = *puVar4;
  *(byte *)puVar4 = (byte)*puVar4 + (byte)uVar2;
  piVar3 = (int *)CONCAT71((uint7)(uint3)(uVar2 >> 8),0xc4);
  uRam0000000174506bd8 =
       uRam0000000174506bd8 & ((int)piVar3 - *piVar3) - (uint)CARRY1((byte)uVar1,(byte)uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

