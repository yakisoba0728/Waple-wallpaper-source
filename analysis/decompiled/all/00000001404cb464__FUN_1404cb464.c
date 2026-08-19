// Function: FUN_1404cb464
// Addr: 1404cb464
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb464(char *param_1,char *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 in_RAX;
  uint *puVar3;
  
  uVar1 = in((short)param_2);
  puVar3 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1);
  uVar2 = (uint)puVar3 ^ *puVar3;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  *param_2 = *param_2 + (char)uVar2;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

