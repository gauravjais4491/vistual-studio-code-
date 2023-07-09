package java13;
class Body {
    String name="Body";
    public static void main(String[] args) {
    System.out.println(new Body ( ) .new Heart().getPName());
    }
    class Heart {
    String name="Heart";
    String getPName() {
    // insert statement here
    return Body.this.name;
    }
    }
    }