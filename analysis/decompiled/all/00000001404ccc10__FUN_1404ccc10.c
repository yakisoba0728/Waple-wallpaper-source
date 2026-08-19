// Function: FUN_1404ccc10
// Addr: 1404ccc10
// Size: 1 bytes


uint FUN_1404ccc10(char *param_1,char param_2)

{
  char cVar1;
  undefined8 in_RAX;
  char unaff_R12B;
  char *pcVar2;
  
  cVar1 = (char)in_RAX + -0x35;
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar2 = *pcVar2 + cVar1;
  return CONCAT31((int3)((ulonglong)in_RAX >> 8),cVar1 + param_2 + (char)((ulonglong)param_1 >> 8))
         ^ 0x352ef800;
}

