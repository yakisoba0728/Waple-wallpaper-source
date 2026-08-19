// Function: FUN_1404befc8
// Addr: 1404befc8
// Size: 1 bytes


void FUN_1404befc8(char *param_1,undefined8 param_2)

{
  uint3 uVar1;
  char cVar2;
  uint uVar3;
  byte *in_RAX;
  uint *puVar4;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  char *unaff_RSI;
  
  *(uint *)(unaff_RSI + (longlong)in_RAX) = *(uint *)(unaff_RSI + (longlong)in_RAX) & unaff_EBX;
  (&stack0x00000000)[(longlong)unaff_RSI * 2] =
       (&stack0x00000000)[(longlong)unaff_RSI * 2] + (char)unaff_EBX;
  uVar3 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *in_RAX) | 0x5000954;
  uVar1 = (uint3)(uVar3 >> 8);
  cVar2 = ((byte)uVar3 ^ 8) + (char)param_2;
  *param_1 = *param_1;
  *(char *)(ulonglong)CONCAT31(uVar1,cVar2) = *(char *)(ulonglong)CONCAT31(uVar1,cVar2) + cVar2;
  cVar2 = cVar2 + (char)param_2;
  puVar4 = (uint *)(ulonglong)CONCAT31(uVar1,cVar2);
  *param_1 = *param_1;
  *unaff_RSI = *unaff_RSI + cVar2;
  *(char *)puVar4 = (char)*puVar4 + cVar2;
  if ((char)*puVar4 != '\0') {
    *(char *)puVar4 = (char)*puVar4 + cVar2;
    register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
    *puVar4 = *puVar4 | CONCAT31(uVar1,cVar2);
    *(char *)((longlong)puVar4 + (longlong)param_1) =
         *(char *)((longlong)puVar4 + (longlong)param_1) + (char)((ulonglong)param_2 >> 8);
    puVar4 = (uint *)((ulonglong)uVar1 << 8);
  }
  *param_1 = *param_1 + (char)register0x00000020;
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)((ulonglong)puVar4 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

