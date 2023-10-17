object DataModule2: TDataModule2
  Height = 696
  Width = 797
  PixelsPerInch = 120
  object FDConnection1: TFDConnection
    Params.Strings = (
      'DataSource=BDEXAMEN'
      'DriverID=ODBC')
    Connected = True
    Left = 32
    Top = 16
  end
  object FDQuery1: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT * FROM GRUPE')
    Left = 144
    Top = 16
  end
  object DataSource1: TDataSource
    DataSet = FDQuery1
    Left = 232
    Top = 16
  end
  object FDQuery2: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      
        'SELECT * FROM STUDENT inner JOIN GRUPE ON STUDENT.GRUPA_ID=GRUPE' +
        '.GRUPA_ID')
    Left = 144
    Top = 96
  end
  object DataSource2: TDataSource
    DataSet = FDQuery2
    Left = 232
    Top = 96
  end
  object INSSTUDENT: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      
        'INSERT INTO STUDENT (NUME,PRENUME,GRUPA_ID,DATA_NASTERII,GEN,IDN' +
        'P,TELEFON)'
      
        #9'VALUES (:NUME, :PRENUME, :GRUPA_ID, :DATA_NASTERII, :GEN, :IDNP' +
        ', :TELEFON)')
    Left = 144
    Top = 200
    ParamData = <
      item
        Name = 'NUME'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'PRENUME'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'GRUPA_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'DATA_NASTERII'
        DataType = ftDate
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'GEN'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'IDNP'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'TELEFON'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
  end
  object UPDSTUDENT: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'UPDATE STUDENT SET'
      #9'NUME=:NUME,'
      #9'PRENUME=:PRENUME,'
      #9'GRUPA_ID=:GRUPA_ID,'
      #9'DATA_NASTERII=:DATA_NASTERII,'
      #9'GEN=:GEN,'
      #9'IDNP=:IDNP,'
      #9'TELEFON=:TELEFON'
      #9'WHERE STUDENT_ID=:STUDENT_ID')
    Left = 144
    Top = 288
    ParamData = <
      item
        Name = 'NUME'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'PRENUME'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'GRUPA_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'DATA_NASTERII'
        DataType = ftDate
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'GEN'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'IDNP'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'TELEFON'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'STUDENT_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
  end
  object DELETESTUDENT: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'DELETE STUDENT WHERE STUDENT_ID=:STUDENT_ID')
    Left = 144
    Top = 384
    ParamData = <
      item
        Name = 'STUDENT_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
  end
  object INSGRUP: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'INSERT INTO GRUPE (NUME, ANUL_FORMARE)'
      #9'VALUES (:NUME, :ANUL_FORMARE)')
    Left = 256
    Top = 200
    ParamData = <
      item
        Name = 'NUME'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'ANUL_FORMARE'
        ParamType = ptInput
      end>
  end
  object DELETEGRUP: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'DELETE GRUPE WHERE GRUPA_ID=:GRUPA_ID')
    Left = 264
    Top = 384
    ParamData = <
      item
        Name = 'GRUPA_ID'
        ParamType = ptInput
      end>
  end
  object UPDGRUP: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'UPDATE GRUPE SET'
      #9'NUME=:NUME,'
      #9'ANUL_FORMARE=:ANUL_FORMARE  '
      #9'WHERE GRUPA_ID=:GRUPA_ID')
    Left = 256
    Top = 288
    ParamData = <
      item
        Name = 'NUME'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'ANUL_FORMARE'
        ParamType = ptInput
      end
      item
        Name = 'GRUPA_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
  end
end
