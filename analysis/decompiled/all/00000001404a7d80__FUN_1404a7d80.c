// Function: FUN_1404a7d80
// Addr: 1404a7d80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7d80(byte *param_1,char *param_2)

{
  byte bVar1;
  undefined8 in_RAX;
  uint *puVar2;
  char *pcVar3;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  
  puVar2 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),10);
  (&stack0x00000000)[unaff_RDI * 2] =
       (&stack0x00000000)[unaff_RDI * 2] + (char)((ulonglong)param_1 >> 8);
  bVar1 = *param_1;
  *param_1 = *param_1 + 10;
  *param_2 = (*param_2 - (char)param_1) - (0xf5 < bVar1);
  *(char *)puVar2 = (char)*puVar2 + (char)unaff_EBX;
  iRam00000001503a8e93 = iRam00000001503a8e93 + (int)param_2;
  param_1 = param_1 + -1;
  if (param_1 == (byte *)0x0 || iRam00000001503a8e93 == 0) {
    *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) =
         *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) >> 1 |
         *(char *)CONCAT44(unaff_0000001c,unaff_EBX) << 7;
    *param_1 = *param_1;
    *(byte *)((longlong)puVar2 + 7) =
         *(byte *)((longlong)puVar2 + 7) | (byte)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar3 = (char *)(ulonglong)((uint)puVar2 | *puVar2);
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) - (char)((ulonglong)param_2 >> 8);
  *pcVar3 = *pcVar3 + (char)((ulonglong)param_1 >> 8);
  *(int *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

