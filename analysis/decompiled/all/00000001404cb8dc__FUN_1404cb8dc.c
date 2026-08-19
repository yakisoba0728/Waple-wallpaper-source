// Function: FUN_1404cb8dc
// Addr: 1404cb8dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb8dc(char *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar3;
  undefined8 in_RAX;
  char *pcVar2;
  uint unaff_EBX;
  
  cVar1 = cRamf80034305e00342e;
  uRam000000011469b8e6 = uRam000000011469b8e6 & unaff_EBX;
  bVar3 = (byte)((ulonglong)in_RAX >> 8) | (byte)in_RAX;
  pcVar2 = (char *)CONCAT71(CONCAT61((int6)((ulonglong)in_RAX >> 0x10),bVar3),cRamf80034305e00342e);
  *param_1 = *param_1 + bVar3;
  *pcVar2 = *pcVar2 + cVar1;
  pcVar2[0x5e00342e] = pcVar2[0x5e00342e] + bVar3;
  *(byte *)((longlong)pcVar2 * 2) =
       *(byte *)((longlong)pcVar2 * 2) ^ (byte)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

