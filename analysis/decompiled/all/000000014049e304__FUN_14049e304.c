// Function: FUN_14049e304
// Addr: 14049e304
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e304(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint3 uVar4;
  byte bVar5;
  undefined4 *in_RAX;
  int *piVar7;
  byte *pbVar8;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  uint *puVar6;
  
  *unaff_RDI = (char)in_RAX;
  uVar2 = *in_RAX;
  uVar4 = (uint3)((uint)uVar2 >> 8);
  bVar5 = (char)uVar2 + (char)((uint)uVar2 >> 8);
  puVar6 = (uint *)(ulonglong)CONCAT31(uVar4,bVar5);
  pbVar8 = (byte *)(param_1 + -1);
  if (pbVar8 == (byte *)0x0 || bVar5 != 0) {
    bVar1 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar5;
    pbVar8[CONCAT31(uVar4,(bVar5 - 6) - CARRY1(bVar1,bVar5))] =
         pbVar8[CONCAT31(uVar4,(bVar5 - 6) - CARRY1(bVar1,bVar5))] + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar6 = *puVar6 & CONCAT31(uVar4,bVar5);
  *(byte *)puVar6 = (char)*puVar6 + bVar5;
  piVar7 = (int *)CONCAT71((uint7)uVar4,0x69);
  *(char *)piVar7 = (char)*piVar7 + 'i';
  iVar3 = *piVar7;
  *pbVar8 = *pbVar8;
  *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) +
       ((byte)((uint)(iVar3 * 0x49e23c00) >> 8) & (byte)((uint)*unaff_RSI >> 8));
  *(int *)pbVar8 = *(int *)pbVar8 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

