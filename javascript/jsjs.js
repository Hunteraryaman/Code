const obj = {
       value: 2,
       getValue: function() {
           return this.value;
       }
   }
   console.log( obj.getValue );