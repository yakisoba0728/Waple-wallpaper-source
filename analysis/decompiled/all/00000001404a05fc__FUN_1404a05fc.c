// Function: FUN_1404a05fc
// Addr: 1404a05fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a05fc(byte *param_1,uint *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint unaff_ESI;
  
  uVar2 = CONCAT71((int7)((ulonglong)&stack0x00000000 >> 8),0x4a);
  *param_1 = *param_1 + 0x4a;
  puVar1 = (uint *)((uVar2 & 0xffffffff) * 2);
  uVar3 = (uint)uVar2;
  *puVar1 = *puVar1 | uVar3;
  *param_2 = *param_2 | unaff_ESI;
  *param_1 = *param_1 ^ (byte)(uVar3 + 0x25003e0 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

