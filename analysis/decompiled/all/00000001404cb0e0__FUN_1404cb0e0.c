// Function: FUN_1404cb0e0
// Addr: 1404cb0e0
// Size: 1 bytes


void FUN_1404cb0e0(char *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint *in_RAX;
  uint *puVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char unaff_R12B;
  char in_CF;
  
  cVar1 = (char)in_RAX;
  *param_1 = *param_1 + cVar1 + in_CF;
  *(char *)in_RAX = (char)*in_RAX + cVar1;
  *in_RAX = *in_RAX & (uint)param_1;
  uVar2 = *in_RAX;
  *(byte *)(unaff_RDI + unaff_RBP) =
       *(byte *)(unaff_RDI + unaff_RBP) | (byte)((ulonglong)param_2 >> 8);
  puVar3 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            *(undefined1 *)(unaff_RBX + (ulonglong)(byte)(cVar1 + (char)uVar2)));
  uVar2 = (uint)puVar3 ^ *puVar3;
  uVar2 = uVar2 ^ *(uint *)(ulonglong)uVar2;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

