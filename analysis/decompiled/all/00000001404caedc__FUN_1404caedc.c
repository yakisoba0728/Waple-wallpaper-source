// Function: FUN_1404caedc
// Addr: 1404caedc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404caedc(undefined1 *param_1,longlong param_2)

{
  undefined8 in_RAX;
  uint *puVar1;
  
  puVar1 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(10,(char)in_RAX));
  *param_1 = *param_1;
  *(char *)puVar1 = (char)*puVar1 + (char)in_RAX;
  *(char *)puVar1 = (char)*puVar1 + '\n';
  puVar1 = (uint *)((ulonglong)((uint)puVar1 ^ *puVar1) + 0x33);
  *puVar1 = *puVar1 ^ (uint)param_2;
  param_1[param_2 + 0x2821004a] = param_1[param_2 + 0x2821004a] + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

