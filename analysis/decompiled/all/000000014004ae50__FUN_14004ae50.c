// Function: FUN_14004ae50
// Addr: 14004ae50
// Size: 76 bytes


void FUN_14004ae50(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte *pbVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  pbVar20 = (byte *)*param_2;
  if ((*pbVar20 < 0x21) && ((0x100002600U >> ((longlong)(char)*pbVar20 & 0x3fU) & 1) != 0)) {
    pbVar1 = pbVar20 + 0x10;
    do {
      pbVar20 = pbVar20 + 1;
      if (pbVar20 == (byte *)((ulonglong)pbVar1 & 0xfffffffffffffff0)) {
        bVar4 = *pbVar20;
        bVar5 = pbVar20[1];
        bVar6 = pbVar20[2];
        bVar7 = pbVar20[3];
        bVar8 = pbVar20[4];
        bVar9 = pbVar20[5];
        bVar10 = pbVar20[6];
        bVar11 = pbVar20[7];
        bVar12 = pbVar20[8];
        bVar13 = pbVar20[9];
        bVar14 = pbVar20[10];
        bVar15 = pbVar20[0xb];
        bVar16 = pbVar20[0xc];
        bVar17 = pbVar20[0xd];
        bVar18 = pbVar20[0xe];
        bVar19 = pbVar20[0xf];
        auVar25[0] = -(bVar4 == UNK_140475f90);
        auVar25[1] = -(bVar5 == UNK_140475f91);
        auVar25[2] = -(bVar6 == UNK_140475f92);
        auVar25[3] = -(bVar7 == UNK_140475f93);
        auVar25[4] = -(bVar8 == UNK_140475f94);
        auVar25[5] = -(bVar9 == UNK_140475f95);
        auVar25[6] = -(bVar10 == UNK_140475f96);
        auVar25[7] = -(bVar11 == UNK_140475f97);
        auVar25[8] = -(bVar12 == UNK_140475f98);
        auVar25[9] = -(bVar13 == UNK_140475f99);
        auVar25[10] = -(bVar14 == UNK_140475f9a);
        auVar25[0xb] = -(bVar15 == UNK_140475f9b);
        auVar25[0xc] = -(bVar16 == UNK_140475f9c);
        auVar25[0xd] = -(bVar17 == UNK_140475f9d);
        auVar25[0xe] = -(bVar18 == UNK_140475f9e);
        auVar25[0xf] = -(bVar19 == UNK_140475f9f);
        auVar21[0] = -(bVar4 == UNK_140475f80);
        auVar21[1] = -(bVar5 == UNK_140475f81);
        auVar21[2] = -(bVar6 == UNK_140475f82);
        auVar21[3] = -(bVar7 == UNK_140475f83);
        auVar21[4] = -(bVar8 == UNK_140475f84);
        auVar21[5] = -(bVar9 == UNK_140475f85);
        auVar21[6] = -(bVar10 == UNK_140475f86);
        auVar21[7] = -(bVar11 == UNK_140475f87);
        auVar21[8] = -(bVar12 == UNK_140475f88);
        auVar21[9] = -(bVar13 == UNK_140475f89);
        auVar21[10] = -(bVar14 == UNK_140475f8a);
        auVar21[0xb] = -(bVar15 == UNK_140475f8b);
        auVar21[0xc] = -(bVar16 == UNK_140475f8c);
        auVar21[0xd] = -(bVar17 == UNK_140475f8d);
        auVar21[0xe] = -(bVar18 == UNK_140475f8e);
        auVar21[0xf] = -(bVar19 == UNK_140475f8f);
        auVar23[0] = -(bVar4 == UNK_140475fa0);
        auVar23[1] = -(bVar5 == UNK_140475fa1);
        auVar23[2] = -(bVar6 == UNK_140475fa2);
        auVar23[3] = -(bVar7 == UNK_140475fa3);
        auVar23[4] = -(bVar8 == UNK_140475fa4);
        auVar23[5] = -(bVar9 == UNK_140475fa5);
        auVar23[6] = -(bVar10 == UNK_140475fa6);
        auVar23[7] = -(bVar11 == UNK_140475fa7);
        auVar23[8] = -(bVar12 == UNK_140475fa8);
        auVar23[9] = -(bVar13 == UNK_140475fa9);
        auVar23[10] = -(bVar14 == UNK_140475faa);
        auVar23[0xb] = -(bVar15 == UNK_140475fab);
        auVar23[0xc] = -(bVar16 == UNK_140475fac);
        auVar23[0xd] = -(bVar17 == UNK_140475fad);
        auVar23[0xe] = -(bVar18 == UNK_140475fae);
        auVar23[0xf] = -(bVar19 == UNK_140475faf);
        auVar26[0] = -(bVar4 == UNK_140475fb0);
        auVar26[1] = -(bVar5 == UNK_140475fb1);
        auVar26[2] = -(bVar6 == UNK_140475fb2);
        auVar26[3] = -(bVar7 == UNK_140475fb3);
        auVar26[4] = -(bVar8 == UNK_140475fb4);
        auVar26[5] = -(bVar9 == UNK_140475fb5);
        auVar26[6] = -(bVar10 == UNK_140475fb6);
        auVar26[7] = -(bVar11 == UNK_140475fb7);
        auVar26[8] = -(bVar12 == UNK_140475fb8);
        auVar26[9] = -(bVar13 == UNK_140475fb9);
        auVar26[10] = -(bVar14 == UNK_140475fba);
        auVar26[0xb] = -(bVar15 == UNK_140475fbb);
        auVar26[0xc] = -(bVar16 == UNK_140475fbc);
        auVar26[0xd] = -(bVar17 == UNK_140475fbd);
        auVar26[0xe] = -(bVar18 == UNK_140475fbe);
        auVar26[0xf] = -(bVar19 == UNK_140475fbf);
        auVar26 = auVar25 | auVar21 | auVar23 | auVar26;
        uVar3 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar26[0xf] >> 7) << 0xf;
        while (uVar3 = ~uVar3, uVar3 == 0) {
          bVar4 = pbVar20[0x10];
          bVar5 = pbVar20[0x11];
          bVar6 = pbVar20[0x12];
          bVar7 = pbVar20[0x13];
          bVar8 = pbVar20[0x14];
          bVar9 = pbVar20[0x15];
          bVar10 = pbVar20[0x16];
          bVar11 = pbVar20[0x17];
          bVar12 = pbVar20[0x18];
          bVar13 = pbVar20[0x19];
          bVar14 = pbVar20[0x1a];
          bVar15 = pbVar20[0x1b];
          bVar16 = pbVar20[0x1c];
          bVar17 = pbVar20[0x1d];
          bVar18 = pbVar20[0x1e];
          bVar19 = pbVar20[0x1f];
          pbVar20 = pbVar20 + 0x10;
          auVar27[0] = -(bVar4 == UNK_140475f90);
          auVar27[1] = -(bVar5 == UNK_140475f91);
          auVar27[2] = -(bVar6 == UNK_140475f92);
          auVar27[3] = -(bVar7 == UNK_140475f93);
          auVar27[4] = -(bVar8 == UNK_140475f94);
          auVar27[5] = -(bVar9 == UNK_140475f95);
          auVar27[6] = -(bVar10 == UNK_140475f96);
          auVar27[7] = -(bVar11 == UNK_140475f97);
          auVar27[8] = -(bVar12 == UNK_140475f98);
          auVar27[9] = -(bVar13 == UNK_140475f99);
          auVar27[10] = -(bVar14 == UNK_140475f9a);
          auVar27[0xb] = -(bVar15 == UNK_140475f9b);
          auVar27[0xc] = -(bVar16 == UNK_140475f9c);
          auVar27[0xd] = -(bVar17 == UNK_140475f9d);
          auVar27[0xe] = -(bVar18 == UNK_140475f9e);
          auVar27[0xf] = -(bVar19 == UNK_140475f9f);
          auVar22[0] = -(bVar4 == UNK_140475f80);
          auVar22[1] = -(bVar5 == UNK_140475f81);
          auVar22[2] = -(bVar6 == UNK_140475f82);
          auVar22[3] = -(bVar7 == UNK_140475f83);
          auVar22[4] = -(bVar8 == UNK_140475f84);
          auVar22[5] = -(bVar9 == UNK_140475f85);
          auVar22[6] = -(bVar10 == UNK_140475f86);
          auVar22[7] = -(bVar11 == UNK_140475f87);
          auVar22[8] = -(bVar12 == UNK_140475f88);
          auVar22[9] = -(bVar13 == UNK_140475f89);
          auVar22[10] = -(bVar14 == UNK_140475f8a);
          auVar22[0xb] = -(bVar15 == UNK_140475f8b);
          auVar22[0xc] = -(bVar16 == UNK_140475f8c);
          auVar22[0xd] = -(bVar17 == UNK_140475f8d);
          auVar22[0xe] = -(bVar18 == UNK_140475f8e);
          auVar22[0xf] = -(bVar19 == UNK_140475f8f);
          auVar24[0] = -(bVar4 == UNK_140475fa0);
          auVar24[1] = -(bVar5 == UNK_140475fa1);
          auVar24[2] = -(bVar6 == UNK_140475fa2);
          auVar24[3] = -(bVar7 == UNK_140475fa3);
          auVar24[4] = -(bVar8 == UNK_140475fa4);
          auVar24[5] = -(bVar9 == UNK_140475fa5);
          auVar24[6] = -(bVar10 == UNK_140475fa6);
          auVar24[7] = -(bVar11 == UNK_140475fa7);
          auVar24[8] = -(bVar12 == UNK_140475fa8);
          auVar24[9] = -(bVar13 == UNK_140475fa9);
          auVar24[10] = -(bVar14 == UNK_140475faa);
          auVar24[0xb] = -(bVar15 == UNK_140475fab);
          auVar24[0xc] = -(bVar16 == UNK_140475fac);
          auVar24[0xd] = -(bVar17 == UNK_140475fad);
          auVar24[0xe] = -(bVar18 == UNK_140475fae);
          auVar24[0xf] = -(bVar19 == UNK_140475faf);
          auVar28[0] = -(bVar4 == UNK_140475fb0);
          auVar28[1] = -(bVar5 == UNK_140475fb1);
          auVar28[2] = -(bVar6 == UNK_140475fb2);
          auVar28[3] = -(bVar7 == UNK_140475fb3);
          auVar28[4] = -(bVar8 == UNK_140475fb4);
          auVar28[5] = -(bVar9 == UNK_140475fb5);
          auVar28[6] = -(bVar10 == UNK_140475fb6);
          auVar28[7] = -(bVar11 == UNK_140475fb7);
          auVar28[8] = -(bVar12 == UNK_140475fb8);
          auVar28[9] = -(bVar13 == UNK_140475fb9);
          auVar28[10] = -(bVar14 == UNK_140475fba);
          auVar28[0xb] = -(bVar15 == UNK_140475fbb);
          auVar28[0xc] = -(bVar16 == UNK_140475fbc);
          auVar28[0xd] = -(bVar17 == UNK_140475fbd);
          auVar28[0xe] = -(bVar18 == UNK_140475fbe);
          auVar28[0xf] = -(bVar19 == UNK_140475fbf);
          auVar28 = auVar27 | auVar22 | auVar24 | auVar28;
          uVar3 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar28[0xf] >> 7) << 0xf;
        }
        uVar2 = 0;
        if (uVar3 != 0) {
          for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        *param_2 = pbVar20 + uVar2;
        return;
      }
    } while ((*pbVar20 < 0x21) && ((0x100002600U >> ((longlong)(char)*pbVar20 & 0x3fU) & 1) != 0));
    *param_2 = pbVar20;
    return;
  }
  *param_2 = pbVar20;
  return;
}

