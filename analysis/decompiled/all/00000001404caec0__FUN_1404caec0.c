// Function: FUN_1404caec0
// Addr: 1404caec0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404caec0(char *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  uint *puVar2;
  char *pcVar3;
  char cVar4;
  longlong unaff_RBP;
  char *unaff_RSI;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  puVar2 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x4c);
  uVar1 = (uint)puVar2 ^ *puVar2;
  *(byte *)(unaff_RBP + 0x521004c) = *(byte *)(unaff_RBP + 0x521004c) >> 2;
  cRam00000001604cb509 = cRam00000001604cb509 + (char)uVar1;
  uVar1 = uVar1 ^ *(uint *)(ulonglong)uVar1;
  puVar2 = (uint *)(ulonglong)uVar1;
  *(uint *)((longlong)puVar2 + 0x33) = *(uint *)((longlong)puVar2 + 0x33) ^ (uint)param_2;
  param_1[param_2 + 0x21004a] = param_1[param_2 + 0x21004a] + cVar4;
  *(char *)puVar2 = (char)*puVar2 + (char)uVar1;
  *(byte *)((longlong)puVar2 + 0x33) = *(byte *)((longlong)puVar2 + 0x33) & (byte)param_2;
  *param_1 = *param_1 + cVar4;
  pcVar3 = (char *)(ulonglong)
                   CONCAT22((short)((uVar1 ^ *puVar2) >> 0x10),CONCAT11(10,(char)(uVar1 ^ *puVar2)))
  ;
  *param_1 = *param_1 + -0x10;
  *unaff_RSI = *unaff_RSI - (char)param_1;
  *pcVar3 = *pcVar3 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

