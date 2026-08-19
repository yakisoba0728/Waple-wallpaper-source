// Function: FUN_1404a8970
// Addr: 1404a8970
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8970(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  uint in_EAX;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  char cVar6;
  byte bVar7;
  undefined6 uVar8;
  longlong unaff_RBX;
  char unaff_SPL;
  int unaff_ESI;
  uint *unaff_RDI;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  
  uVar8 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar6 = (char)param_1;
  puVar5 = (uint *)((ulonglong)(in_EAX | 0x5000354) ^ 2);
  *(char *)puVar5 = (char)*puVar5 + (char)((in_EAX | 0x5000354) >> 8);
  *unaff_RDI = (uint)puVar5;
  uVar3 = (uint)puVar5 | *puVar5;
  puVar5 = (uint *)(ulonglong)uVar3;
  bVar7 = (byte)((ulonglong)param_1 >> 8) & *(byte *)(unaff_RBX + 0x6784000b);
  *(char *)CONCAT62(uVar8,CONCAT11(bVar7,cVar6)) =
       *(char *)CONCAT62(uVar8,CONCAT11(bVar7,cVar6)) + unaff_SPL;
  *(char *)puVar5 = (char)*puVar5 + (char)uVar3;
  *(char *)puVar5 = (char)*puVar5 + (char)(uVar3 >> 8);
  unaff_RDI[1] = uVar3;
  uVar3 = uVar3 | *puVar5;
  bVar7 = bVar7 & *(byte *)(unaff_RBX + 0x6784000b);
  bVar1 = *(byte *)CONCAT62(uVar8,CONCAT11(bVar7,cVar6));
  *(byte *)CONCAT62(uVar8,CONCAT11(bVar7,cVar6)) =
       *(char *)CONCAT62(uVar8,CONCAT11(bVar7,cVar6)) + (byte)uVar3;
  uVar2 = (uint)CARRY1(bVar1,(byte)uVar3);
  iVar4 = uVar3 + 0xa2150009 + uVar2;
  pavgb(in_MM1_Ba,(char)uRam000000014a0a9573);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0a9573 >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0a9573 >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0a9573 >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0a9573 >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0a9573 >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0a9573 >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0a9573 >> 0x38));
  if (SCARRY4(iVar4,unaff_ESI) ==
      SCARRY4(iVar4 + unaff_ESI,(uint)(0x5deafff6 < uVar3 || CARRY4(uVar3 + 0xa2150009,uVar2)))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + 2) = (char)unaff_RDI[2] + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

