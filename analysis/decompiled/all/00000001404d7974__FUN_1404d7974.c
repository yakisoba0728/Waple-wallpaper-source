// Function: FUN_1404d7974
// Addr: 1404d7974
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d7979) overlaps instruction at (ram,0x0001404d7978)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d792d) */
/* WARNING: Removing unreachable block (ram,0x0001404d7965) */
/* WARNING: Removing unreachable block (ram,0x0001404d792f) */
/* WARNING: Removing unreachable block (ram,0x0001404d7980) */
/* WARNING: Removing unreachable block (ram,0x0001404d7933) */
/* WARNING: Removing unreachable block (ram,0x0001404d793f) */
/* WARNING: Removing unreachable block (ram,0x0001404d7941) */
/* WARNING: Removing unreachable block (ram,0x0001404d7979) */
/* WARNING: Removing unreachable block (ram,0x0001404d7943) */
/* WARNING: Removing unreachable block (ram,0x0001404d7985) */
/* WARNING: Removing unreachable block (ram,0x0001404d794f) */
/* WARNING: Removing unreachable block (ram,0x0001404d7953) */
/* WARNING: Removing unreachable block (ram,0x0001404d7957) */
/* WARNING: Removing unreachable block (ram,0x0001404d79a4) */
/* WARNING: Removing unreachable block (ram,0x0001404d79cf) */
/* WARNING: Removing unreachable block (ram,0x0001404d79d5) */
/* WARNING: Removing unreachable block (ram,0x0001404d7a1c) */
/* WARNING: Removing unreachable block (ram,0x0001404d7a33) */
/* WARNING: Removing unreachable block (ram,0x0001404d7a80) */
/* WARNING: Removing unreachable block (ram,0x0001404d7989) */
/* WARNING: Removing unreachable block (ram,0x0001404d798e) */
/* WARNING: Removing unreachable block (ram,0x0001404d7975) */

void FUN_1404d7974(undefined8 param_1,longlong param_2)

{
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

