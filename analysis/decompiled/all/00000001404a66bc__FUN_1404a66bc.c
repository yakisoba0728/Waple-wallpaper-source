// Function: FUN_1404a66bc
// Addr: 1404a66bc
// Size: 1 bytes


void FUN_1404a66bc(char *param_1,longlong param_2)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  uint *in_RAX;
  uint *puVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  
  *(char *)((longlong)in_RAX + 0x1004a65) = *(char *)((longlong)in_RAX + 0x1004a65) + unaff_BL;
  cVar3 = (char)in_RAX;
  pcVar2 = (char *)((longlong)in_RAX + unaff_RSI * 2);
  *pcVar2 = *pcVar2 + cVar3;
  *(uint **)((ulonglong)(uint)((int)&stack0x00000000 + *(int *)((longlong)in_RAX + 2)) - 8) = in_RAX
  ;
  *(char *)in_RAX = (char)*in_RAX + cVar3;
  *in_RAX = *in_RAX & (uint)param_1;
  puVar4 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3 + (char)*in_RAX);
  *(byte *)(param_2 + unaff_RSI) = *(byte *)(param_2 + unaff_RSI) | (byte)((ulonglong)param_2 >> 8);
  *(char *)((longlong)puVar4 + -0x7d) = *(char *)((longlong)puVar4 + -0x7d) + (char)param_2;
  *puVar4 = *puVar4 | (uint)puVar4;
  piVar1 = (int *)(CONCAT71(unaff_00000019,unaff_BL) + 0x65f40009);
  *piVar1 = *piVar1 + 0x4a;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)((ulonglong)param_1 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

