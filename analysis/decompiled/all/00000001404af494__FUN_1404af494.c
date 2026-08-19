// Function: FUN_1404af494
// Addr: 1404af494
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af494(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  uint *puVar2;
  
  puVar2 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11(((char)((ulonglong)in_RAX >> 8) +
                                     (char)((ulonglong)param_2 >> 8)) * '\x02' + (char)param_2,
                                     (char)in_RAX));
  uVar1 = (uint)puVar2 | *puVar2;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)(uVar1 >> 8);
  uRam00000001944ff4b8 = uRam00000001944ff4b8 & CONCAT31((int3)(uVar1 >> 8),uRam10001410dc001410);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

